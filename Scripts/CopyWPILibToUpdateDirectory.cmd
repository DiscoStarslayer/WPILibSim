
C:

del \WindRiver\workspace\WorkbenchUpdate\vxworks-6.3\target\h\WPIlib\*.h
del \WindRiver\workspace\WorkbenchUpdate\vxworks-6.3\target\h\WPIlib\ChipObject\*.h
del \WindRiver\workspace\WorkbenchUpdate\vxworks-6.3\target\h\WPIlib\CInterfaces\*.h
del \WindRiver\workspace\WorkbenchUpdate\vxworks-6.3\target\h\WPIlib\NetworkCommunication\*.h
del \WindRiver\workspace\WorkbenchUpdate\vxworks-6.3\target\h\WPIlib\Visa\*.h
del \WindRiver\workspace\WorkbenchUpdate\vxworks-6.3\target\h\WPIlib\Vision\*.h
del \WindRiver\workspace\WorkbenchUpdate\vxworks-6.3\target\h\WPIlib\Vision2009\*.h

del \WindRiver\workspace\WorkbenchUpdate\vxworks-6.3\target\lib\WPILib.a

cd \WindRiver\workspace\WorkbenchUpdate\vxworks-6.3\target\h\WPILib

copy \WindRiver\workspace\WPILib\*.h
copy \WindRiver\workspace\WPILib\ChipObject\*.h ChipObject
copy \WindRiver\workspace\WPILib\visa\*.h visa
copy \WindRiver\workspace\WPILib\NetworkCommunication\*.h NetworkCommunication
copy \WindRiver\workspace\WPILib\CInterfaces\*.h CInterfaces
copy \WindRiver\workspace\WPILib\Vision\*.h Vision
copy \WindRiver\workspace\WPILib\Vision2009\*.h Vision2009

copy C:\WindRiver\workspace\WPILib\PPC603gnu\WPILib\Debug\WPILib.a \WindRiver\workspace\WorkbenchUpdate\vxworks-6.3\target\lib

cd \WindRiver\workspace\WPILib\Scripts
