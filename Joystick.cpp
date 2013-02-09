/***********************************************************************
 * AUTHOR: Darren Thompson <Darren>
 *   FILE: Joystick.cpp
 *   DATE: Sat Feb 09 17:44:06 2013
 *  DESCR: 
 ***********************************************************************/
#include "Joystick.h"

/***********************************************************************
 *  Method: Joystick::Joystick
 *  Params: UINT32 port
 * Effects: 
 ***********************************************************************/
Joystick::Joystick(UINT32 port)
{
}


/***********************************************************************
 *  Method: Joystick::Joystick
 *  Params: UINT32 port, UINT32 numAxisTypes, UINT32 numButtonTypes
 * Effects: 
 ***********************************************************************/
Joystick::Joystick(UINT32 port, UINT32 numAxisTypes, UINT32 numButtonTypes)
{
}


/***********************************************************************
 *  Method: Joystick::~Joystick
 *  Params: 
 * Effects: 
 ***********************************************************************/
Joystick::~Joystick()
{
}


/***********************************************************************
 *  Method: Joystick::GetAxisChannel
 *  Params: AxisType axis
 * Returns: UINT32
 * Effects: 
 ***********************************************************************/
UINT32
Joystick::GetAxisChannel(AxisType axis)
{
}


/***********************************************************************
 *  Method: Joystick::SetAxisChannel
 *  Params: AxisType axis, UINT32 channel
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
Joystick::SetAxisChannel(AxisType axis, UINT32 channel)
{
}


/***********************************************************************
 *  Method: Joystick::GetX
 *  Params: JoystickHand hand
 * Returns: float
 * Effects: 
 ***********************************************************************/
float
Joystick::GetX(JoystickHand hand)
{
}


/***********************************************************************
 *  Method: Joystick::GetY
 *  Params: JoystickHand hand
 * Returns: float
 * Effects: 
 ***********************************************************************/
float
Joystick::GetY(JoystickHand hand)
{
}


/***********************************************************************
 *  Method: Joystick::GetZ
 *  Params: 
 * Returns: float
 * Effects: 
 ***********************************************************************/
float
Joystick::GetZ()
{
}


/***********************************************************************
 *  Method: Joystick::GetTwist
 *  Params: 
 * Returns: float
 * Effects: 
 ***********************************************************************/
float
Joystick::GetTwist()
{
}


/***********************************************************************
 *  Method: Joystick::GetThrottle
 *  Params: 
 * Returns: float
 * Effects: 
 ***********************************************************************/
float
Joystick::GetThrottle()
{
}


/***********************************************************************
 *  Method: Joystick::GetAxis
 *  Params: AxisType axis
 * Returns: float
 * Effects: 
 ***********************************************************************/
float
Joystick::GetAxis(AxisType axis)
{
}


/***********************************************************************
 *  Method: Joystick::GetRawAxis
 *  Params: UINT32 axis
 * Returns: float
 * Effects: 
 ***********************************************************************/
float
Joystick::GetRawAxis(UINT32 axis)
{
}


/***********************************************************************
 *  Method: Joystick::GetTrigger
 *  Params: JoystickHand hand
 * Returns: bool
 * Effects: 
 ***********************************************************************/
bool
Joystick::GetTrigger(JoystickHand hand)
{
}


/***********************************************************************
 *  Method: Joystick::GetTop
 *  Params: JoystickHand hand
 * Returns: bool
 * Effects: 
 ***********************************************************************/
bool
Joystick::GetTop(JoystickHand hand)
{
}


/***********************************************************************
 *  Method: Joystick::GetBumper
 *  Params: JoystickHand hand
 * Returns: bool
 * Effects: 
 ***********************************************************************/
bool
Joystick::GetBumper(JoystickHand hand)
{
}


/***********************************************************************
 *  Method: Joystick::GetButton
 *  Params: ButtonType button
 * Returns: bool
 * Effects: 
 ***********************************************************************/
bool
Joystick::GetButton(ButtonType button)
{
}


/***********************************************************************
 *  Method: Joystick::GetRawButton
 *  Params: UINT32 button
 * Returns: bool
 * Effects: 
 ***********************************************************************/
bool
Joystick::GetRawButton(UINT32 button)
{
}


/***********************************************************************
 *  Method: Joystick::GetStickForPort
 *  Params: UINT32 port
 * Returns: Joystick *
 * Effects: 
 ***********************************************************************/
Joystick *
Joystick::GetStickForPort(UINT32 port)
{
}


/***********************************************************************
 *  Method: Joystick::GetMagnitude
 *  Params: 
 * Returns: float
 * Effects: 
 ***********************************************************************/
float
Joystick::GetMagnitude()
{
}


/***********************************************************************
 *  Method: Joystick::GetDirectionRadians
 *  Params: 
 * Returns: float
 * Effects: 
 ***********************************************************************/
float
Joystick::GetDirectionRadians()
{
}


/***********************************************************************
 *  Method: Joystick::GetDirectionDegrees
 *  Params: 
 * Returns: float
 * Effects: 
 ***********************************************************************/
float
Joystick::GetDirectionDegrees()
{
}


/***********************************************************************
 *  Method: Joystick::DISALLOW_COPY_AND_ASSIGN
 *  Params: Joystick
 * Effects: 
 ***********************************************************************/
Joystick::DISALLOW_COPY_AND_ASSIGN(Joystick)
{
}


/***********************************************************************
 *  Method: Joystick::InitJoystick
 *  Params: UINT32 numAxisTypes, UINT32 numButtonTypes
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
Joystick::InitJoystick(UINT32 numAxisTypes, UINT32 numButtonTypes)
{
}


