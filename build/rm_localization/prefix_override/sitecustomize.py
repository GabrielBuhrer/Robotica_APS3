import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/gabriel/Robotica/Robotica_APS3/install/rm_localization'
