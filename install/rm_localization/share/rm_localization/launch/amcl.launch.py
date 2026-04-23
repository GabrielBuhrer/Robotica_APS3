"""
amcl.launch.py

Lanca o map_server e o AMCL para localizacao com mapa pre-construido.

Uso:
  ros2 launch rm_localization amcl.launch.py

Ou passando outro mapa:
  ros2 launch rm_localization amcl.launch.py map:=/caminho/para/house_map.yaml
"""

import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

from launch_ros.actions import LifecycleNode, Node


def generate_launch_description():
    pkg_share = get_package_share_directory('rm_localization')

    amcl_yaml = os.path.join(
        pkg_share,
        'config',
        'amcl.yaml'
    )

    default_map = os.path.join(
        pkg_share,
        'maps',
        'house_map.yaml'
    )

    map_arg = DeclareLaunchArgument(
        'map',
        default_value=default_map,
        description='Caminho completo para o arquivo .yaml do mapa'
    )

    map_server = LifecycleNode(
        package='nav2_map_server',
        executable='map_server',
        name='map_server',
        namespace='',
        output='screen',
        parameters=[{
            'use_sim_time': True,
            'yaml_filename': LaunchConfiguration('map'),
        }]
    )

    amcl = LifecycleNode(
        package='nav2_amcl',
        executable='amcl',
        name='amcl',
        namespace='',
        output='screen',
        parameters=[
            amcl_yaml,
            {'use_sim_time': True}
        ]
    )

    lifecycle_manager = Node(
        package='nav2_lifecycle_manager',
        executable='lifecycle_manager',
        name='lifecycle_manager_localization',
        output='screen',
        parameters=[{
            'use_sim_time': True,
            'autostart': True,
            'node_names': ['map_server', 'amcl'],
        }]
    )

    return LaunchDescription([
        map_arg,
        map_server,
        amcl,
        lifecycle_manager,
    ])