/***********************************************************************
 * AUTHOR: Darren Thompson <Darren>
 *   FILE: AxisCamera.cpp
 *   DATE: Sat Feb 09 17:46:04 2013
 *  DESCR: 
 ***********************************************************************/
#include "AxisCamera.h"

/***********************************************************************
 *  Method: AxisCamera::AxisCamera
 *  Params: const char *cameraIP
 * Effects: 
 ***********************************************************************/
AxisCamera::AxisCamera(const char *cameraIP)
{
}


/***********************************************************************
 *  Method: AxisCamera::~AxisCamera
 *  Params: 
 * Effects: 
 ***********************************************************************/
AxisCamera::~AxisCamera()
{
}


/***********************************************************************
 *  Method: AxisCamera::GetInstance
 *  Params: 
 * Returns: AxisCamera &
 * Effects: 
 ***********************************************************************/
AxisCamera &
AxisCamera::GetInstance()
{
}


/***********************************************************************
 *  Method: AxisCamera::DeleteInstance
 *  Params: 
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
AxisCamera::DeleteInstance()
{
}


/***********************************************************************
 *  Method: AxisCamera::IsFreshImage
 *  Params: 
 * Returns: bool
 * Effects: 
 ***********************************************************************/
bool
AxisCamera::IsFreshImage()
{
}


/***********************************************************************
 *  Method: AxisCamera::GetNewImageSem
 *  Params: 
 * Returns: SEM_ID
 * Effects: 
 ***********************************************************************/
SEM_ID
AxisCamera::GetNewImageSem()
{
}


/***********************************************************************
 *  Method: AxisCamera::GetImage
 *  Params: Image *imaqImage
 * Returns: int
 * Effects: 
 ***********************************************************************/
int
AxisCamera::GetImage(Image *imaqImage)
{
}


/***********************************************************************
 *  Method: AxisCamera::GetImage
 *  Params: ColorImage *image
 * Returns: int
 * Effects: 
 ***********************************************************************/
int
AxisCamera::GetImage(ColorImage *image)
{
}


/***********************************************************************
 *  Method: AxisCamera::GetImage
 *  Params: 
 * Returns: HSLImage *
 * Effects: 
 ***********************************************************************/
HSLImage *
AxisCamera::GetImage()
{
}


/***********************************************************************
 *  Method: AxisCamera::CopyJPEG
 *  Params: char **destImage, int &destImageSize, int &destImageBufferSize
 * Returns: int
 * Effects: 
 ***********************************************************************/
int
AxisCamera::CopyJPEG(char **destImage, int &destImageSize, int &destImageBufferSize)
{
}


/***********************************************************************
 *  Method: AxisCamera::s_ImageStreamTaskFunction
 *  Params: AxisCamera *thisPtr
 * Returns: int
 * Effects: 
 ***********************************************************************/
int
AxisCamera::s_ImageStreamTaskFunction(AxisCamera *thisPtr)
{
}


/***********************************************************************
 *  Method: AxisCamera::ImageStreamTaskFunction
 *  Params: 
 * Returns: int
 * Effects: 
 ***********************************************************************/
int
AxisCamera::ImageStreamTaskFunction()
{
}


/***********************************************************************
 *  Method: AxisCamera::ReadImagesFromCamera
 *  Params: 
 * Returns: int
 * Effects: 
 ***********************************************************************/
int
AxisCamera::ReadImagesFromCamera()
{
}


/***********************************************************************
 *  Method: AxisCamera::UpdatePublicImageFromCamera
 *  Params: char *imgBuffer, int imgSize
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
AxisCamera::UpdatePublicImageFromCamera(char *imgBuffer, int imgSize)
{
}


/***********************************************************************
 *  Method: AxisCamera::RestartCameraTask
 *  Params: 
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
AxisCamera::RestartCameraTask()
{
}


