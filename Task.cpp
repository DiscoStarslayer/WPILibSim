/***********************************************************************
 * AUTHOR: Darren Thompson <Darren>
 *   FILE: Task.cpp
 *   DATE: Sat Feb 09 17:44:06 2013
 *  DESCR: 
 ***********************************************************************/
#include "Task.h"

/***********************************************************************
 *  Method: Task::Task
 *  Params: const char *name, FUNCPTR function, INT32 priority, UINT32 stackSize
 * Effects: 
 ***********************************************************************/
Task::Task(const char *name, FUNCPTR function, INT32 priority, UINT32 stackSize)
{
}


/***********************************************************************
 *  Method: Task::~Task
 *  Params: 
 * Effects: 
 ***********************************************************************/
Task::~Task()
{
}


/***********************************************************************
 *  Method: Task::Start
 *  Params: UINT32 arg0, UINT32 arg1, UINT32 arg2, UINT32 arg3, UINT32 arg4, UINT32 arg5, UINT32 arg6, UINT32 arg7, UINT32 arg8, UINT32 arg9
 * Returns: bool
 * Effects: 
 ***********************************************************************/
bool
Task::Start(UINT32 arg0, UINT32 arg1, UINT32 arg2, UINT32 arg3, UINT32 arg4, UINT32 arg5, UINT32 arg6, UINT32 arg7, UINT32 arg8, UINT32 arg9)
{
}


/***********************************************************************
 *  Method: Task::Restart
 *  Params: void
 * Returns: bool
 * Effects: 
 ***********************************************************************/
bool
Task::Restart(void)
{
}


/***********************************************************************
 *  Method: Task::Stop
 *  Params: void
 * Returns: bool
 * Effects: 
 ***********************************************************************/
bool
Task::Stop(void)
{
}


/***********************************************************************
 *  Method: Task::IsReady
 *  Params: void
 * Returns: bool
 * Effects: 
 ***********************************************************************/
bool
Task::IsReady(void)
{
}


/***********************************************************************
 *  Method: Task::IsSuspended
 *  Params: void
 * Returns: bool
 * Effects: 
 ***********************************************************************/
bool
Task::IsSuspended(void)
{
}


/***********************************************************************
 *  Method: Task::Suspend
 *  Params: void
 * Returns: bool
 * Effects: 
 ***********************************************************************/
bool
Task::Suspend(void)
{
}


/***********************************************************************
 *  Method: Task::Resume
 *  Params: void
 * Returns: bool
 * Effects: 
 ***********************************************************************/
bool
Task::Resume(void)
{
}


/***********************************************************************
 *  Method: Task::Verify
 *  Params: void
 * Returns: bool
 * Effects: 
 ***********************************************************************/
bool
Task::Verify(void)
{
}


/***********************************************************************
 *  Method: Task::GetPriority
 *  Params: void
 * Returns: INT32
 * Effects: 
 ***********************************************************************/
INT32
Task::GetPriority(void)
{
}


/***********************************************************************
 *  Method: Task::SetPriority
 *  Params: INT32 priority
 * Returns: bool
 * Effects: 
 ***********************************************************************/
bool
Task::SetPriority(INT32 priority)
{
}


/***********************************************************************
 *  Method: Task::GetName
 *  Params: void
 * Returns: const char *
 * Effects: 
 ***********************************************************************/
const char *
Task::GetName(void)
{
}


/***********************************************************************
 *  Method: Task::GetID
 *  Params: void
 * Returns: INT32
 * Effects: 
 ***********************************************************************/
INT32
Task::GetID(void)
{
}


/***********************************************************************
 *  Method: Task::HandleError
 *  Params: STATUS results
 * Returns: bool
 * Effects: 
 ***********************************************************************/
bool
Task::HandleError(STATUS results)
{
}


/***********************************************************************
 *  Method: Task::DISALLOW_COPY_AND_ASSIGN
 *  Params: Task
 * Effects: 
 ***********************************************************************/
Task::DISALLOW_COPY_AND_ASSIGN(Task)
{
}


