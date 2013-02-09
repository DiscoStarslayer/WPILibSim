/***********************************************************************
 * AUTHOR: Darren Thompson <Darren>
 *   FILE: ColorImage.cpp
 *   DATE: Sat Feb 09 17:46:04 2013
 *  DESCR: 
 ***********************************************************************/
#include "ColorImage.h"

/***********************************************************************
 *  Method: ColorImage::ColorImage
 *  Params: ImageType type
 * Effects: 
 ***********************************************************************/
ColorImage::ColorImage(ImageType type)
{
}


/***********************************************************************
 *  Method: ColorImage::~ColorImage
 *  Params: 
 * Effects: 
 ***********************************************************************/
ColorImage::~ColorImage()
{
}


/***********************************************************************
 *  Method: ColorImage::ThresholdRGB
 *  Params: int redLow, int redHigh, int greenLow, int greenHigh, int blueLow, int blueHigh
 * Returns: BinaryImage *
 * Effects: 
 ***********************************************************************/
BinaryImage *
ColorImage::ThresholdRGB(int redLow, int redHigh, int greenLow, int greenHigh, int blueLow, int blueHigh)
{
}


/***********************************************************************
 *  Method: ColorImage::ThresholdHSL
 *  Params: int hueLow, int hueHigh, int saturationLow, int saturationHigh, int luminenceLow, int luminenceHigh
 * Returns: BinaryImage *
 * Effects: 
 ***********************************************************************/
BinaryImage *
ColorImage::ThresholdHSL(int hueLow, int hueHigh, int saturationLow, int saturationHigh, int luminenceLow, int luminenceHigh)
{
}


/***********************************************************************
 *  Method: ColorImage::ThresholdHSV
 *  Params: int hueLow, int hueHigh, int saturationLow, int saturationHigh, int valueHigh, int valueLow
 * Returns: BinaryImage *
 * Effects: 
 ***********************************************************************/
BinaryImage *
ColorImage::ThresholdHSV(int hueLow, int hueHigh, int saturationLow, int saturationHigh, int valueHigh, int valueLow)
{
}


/***********************************************************************
 *  Method: ColorImage::ThresholdHSI
 *  Params: int hueLow, int hueHigh, int saturationLow, int saturationHigh, int intensityLow, int intensityHigh
 * Returns: BinaryImage *
 * Effects: 
 ***********************************************************************/
BinaryImage *
ColorImage::ThresholdHSI(int hueLow, int hueHigh, int saturationLow, int saturationHigh, int intensityLow, int intensityHigh)
{
}


/***********************************************************************
 *  Method: ColorImage::ThresholdRGB
 *  Params: Threshold &threshold
 * Returns: BinaryImage *
 * Effects: 
 ***********************************************************************/
BinaryImage *
ColorImage::ThresholdRGB(Threshold &threshold)
{
}


/***********************************************************************
 *  Method: ColorImage::ThresholdHSL
 *  Params: Threshold &threshold
 * Returns: BinaryImage *
 * Effects: 
 ***********************************************************************/
BinaryImage *
ColorImage::ThresholdHSL(Threshold &threshold)
{
}


/***********************************************************************
 *  Method: ColorImage::ThresholdHSV
 *  Params: Threshold &threshold
 * Returns: BinaryImage *
 * Effects: 
 ***********************************************************************/
BinaryImage *
ColorImage::ThresholdHSV(Threshold &threshold)
{
}


/***********************************************************************
 *  Method: ColorImage::ThresholdHSI
 *  Params: Threshold &threshold
 * Returns: BinaryImage *
 * Effects: 
 ***********************************************************************/
BinaryImage *
ColorImage::ThresholdHSI(Threshold &threshold)
{
}


/***********************************************************************
 *  Method: ColorImage::GetRedPlane
 *  Params: 
 * Returns: MonoImage *
 * Effects: 
 ***********************************************************************/
MonoImage *
ColorImage::GetRedPlane()
{
}


/***********************************************************************
 *  Method: ColorImage::GetGreenPlane
 *  Params: 
 * Returns: MonoImage *
 * Effects: 
 ***********************************************************************/
MonoImage *
ColorImage::GetGreenPlane()
{
}


/***********************************************************************
 *  Method: ColorImage::GetBluePlane
 *  Params: 
 * Returns: MonoImage *
 * Effects: 
 ***********************************************************************/
MonoImage *
ColorImage::GetBluePlane()
{
}


/***********************************************************************
 *  Method: ColorImage::GetHSLHuePlane
 *  Params: 
 * Returns: MonoImage *
 * Effects: 
 ***********************************************************************/
MonoImage *
ColorImage::GetHSLHuePlane()
{
}


/***********************************************************************
 *  Method: ColorImage::GetHSVHuePlane
 *  Params: 
 * Returns: MonoImage *
 * Effects: 
 ***********************************************************************/
MonoImage *
ColorImage::GetHSVHuePlane()
{
}


/***********************************************************************
 *  Method: ColorImage::GetHSIHuePlane
 *  Params: 
 * Returns: MonoImage *
 * Effects: 
 ***********************************************************************/
MonoImage *
ColorImage::GetHSIHuePlane()
{
}


/***********************************************************************
 *  Method: ColorImage::GetHSLSaturationPlane
 *  Params: 
 * Returns: MonoImage *
 * Effects: 
 ***********************************************************************/
MonoImage *
ColorImage::GetHSLSaturationPlane()
{
}


/***********************************************************************
 *  Method: ColorImage::GetHSVSaturationPlane
 *  Params: 
 * Returns: MonoImage *
 * Effects: 
 ***********************************************************************/
MonoImage *
ColorImage::GetHSVSaturationPlane()
{
}


/***********************************************************************
 *  Method: ColorImage::GetHSISaturationPlane
 *  Params: 
 * Returns: MonoImage *
 * Effects: 
 ***********************************************************************/
MonoImage *
ColorImage::GetHSISaturationPlane()
{
}


/***********************************************************************
 *  Method: ColorImage::GetLuminancePlane
 *  Params: 
 * Returns: MonoImage *
 * Effects: 
 ***********************************************************************/
MonoImage *
ColorImage::GetLuminancePlane()
{
}


/***********************************************************************
 *  Method: ColorImage::GetValuePlane
 *  Params: 
 * Returns: MonoImage *
 * Effects: 
 ***********************************************************************/
MonoImage *
ColorImage::GetValuePlane()
{
}


/***********************************************************************
 *  Method: ColorImage::GetIntensityPlane
 *  Params: 
 * Returns: MonoImage *
 * Effects: 
 ***********************************************************************/
MonoImage *
ColorImage::GetIntensityPlane()
{
}


/***********************************************************************
 *  Method: ColorImage::ReplaceRedPlane
 *  Params: MonoImage *plane
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
ColorImage::ReplaceRedPlane(MonoImage *plane)
{
}


/***********************************************************************
 *  Method: ColorImage::ReplaceGreenPlane
 *  Params: MonoImage *plane
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
ColorImage::ReplaceGreenPlane(MonoImage *plane)
{
}


/***********************************************************************
 *  Method: ColorImage::ReplaceBluePlane
 *  Params: MonoImage *plane
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
ColorImage::ReplaceBluePlane(MonoImage *plane)
{
}


/***********************************************************************
 *  Method: ColorImage::ReplaceHSLHuePlane
 *  Params: MonoImage *plane
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
ColorImage::ReplaceHSLHuePlane(MonoImage *plane)
{
}


/***********************************************************************
 *  Method: ColorImage::ReplaceHSVHuePlane
 *  Params: MonoImage *plane
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
ColorImage::ReplaceHSVHuePlane(MonoImage *plane)
{
}


/***********************************************************************
 *  Method: ColorImage::ReplaceHSIHuePlane
 *  Params: MonoImage *plane
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
ColorImage::ReplaceHSIHuePlane(MonoImage *plane)
{
}


/***********************************************************************
 *  Method: ColorImage::ReplaceHSLSaturationPlane
 *  Params: MonoImage *plane
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
ColorImage::ReplaceHSLSaturationPlane(MonoImage *plane)
{
}


/***********************************************************************
 *  Method: ColorImage::ReplaceHSVSaturationPlane
 *  Params: MonoImage *plane
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
ColorImage::ReplaceHSVSaturationPlane(MonoImage *plane)
{
}


/***********************************************************************
 *  Method: ColorImage::ReplaceHSISaturationPlane
 *  Params: MonoImage *plane
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
ColorImage::ReplaceHSISaturationPlane(MonoImage *plane)
{
}


/***********************************************************************
 *  Method: ColorImage::ReplaceLuminancePlane
 *  Params: MonoImage *plane
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
ColorImage::ReplaceLuminancePlane(MonoImage *plane)
{
}


/***********************************************************************
 *  Method: ColorImage::ReplaceValuePlane
 *  Params: MonoImage *plane
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
ColorImage::ReplaceValuePlane(MonoImage *plane)
{
}


/***********************************************************************
 *  Method: ColorImage::ReplaceIntensityPlane
 *  Params: MonoImage *plane
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
ColorImage::ReplaceIntensityPlane(MonoImage *plane)
{
}


/***********************************************************************
 *  Method: ColorImage::ColorEqualize
 *  Params: 
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
ColorImage::ColorEqualize()
{
}


/***********************************************************************
 *  Method: ColorImage::LuminanceEqualize
 *  Params: 
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
ColorImage::LuminanceEqualize()
{
}


/***********************************************************************
 *  Method: ColorImage::ComputeThreshold
 *  Params: ColorMode colorMode, int low1, int high1, int low2, int high2, int low3, int high3
 * Returns: BinaryImage *
 * Effects: 
 ***********************************************************************/
BinaryImage *
ColorImage::ComputeThreshold(ColorMode colorMode, int low1, int high1, int low2, int high2, int low3, int high3)
{
}


/***********************************************************************
 *  Method: ColorImage::Equalize
 *  Params: bool allPlanes
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
ColorImage::Equalize(bool allPlanes)
{
}


/***********************************************************************
 *  Method: ColorImage::ExtractColorPlane
 *  Params: ColorMode mode, int planeNumber
 * Returns: MonoImage *
 * Effects: 
 ***********************************************************************/
MonoImage *
ColorImage::ExtractColorPlane(ColorMode mode, int planeNumber)
{
}


/***********************************************************************
 *  Method: ColorImage::ExtractFirstColorPlane
 *  Params: ColorMode mode
 * Returns: MonoImage *
 * Effects: 
 ***********************************************************************/
MonoImage *
ColorImage::ExtractFirstColorPlane(ColorMode mode)
{
}


/***********************************************************************
 *  Method: ColorImage::ExtractSecondColorPlane
 *  Params: ColorMode mode
 * Returns: MonoImage *
 * Effects: 
 ***********************************************************************/
MonoImage *
ColorImage::ExtractSecondColorPlane(ColorMode mode)
{
}


/***********************************************************************
 *  Method: ColorImage::ExtractThirdColorPlane
 *  Params: ColorMode mode
 * Returns: MonoImage *
 * Effects: 
 ***********************************************************************/
MonoImage *
ColorImage::ExtractThirdColorPlane(ColorMode mode)
{
}


/***********************************************************************
 *  Method: ColorImage::ReplacePlane
 *  Params: ColorMode mode, MonoImage *plane, int planeNumber
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
ColorImage::ReplacePlane(ColorMode mode, MonoImage *plane, int planeNumber)
{
}


/***********************************************************************
 *  Method: ColorImage::ReplaceFirstColorPlane
 *  Params: ColorMode mode, MonoImage *plane
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
ColorImage::ReplaceFirstColorPlane(ColorMode mode, MonoImage *plane)
{
}


/***********************************************************************
 *  Method: ColorImage::ReplaceSecondColorPlane
 *  Params: ColorMode mode, MonoImage *plane
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
ColorImage::ReplaceSecondColorPlane(ColorMode mode, MonoImage *plane)
{
}


/***********************************************************************
 *  Method: ColorImage::ReplaceThirdColorPlane
 *  Params: ColorMode mode, MonoImage *plane
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
ColorImage::ReplaceThirdColorPlane(ColorMode mode, MonoImage *plane)
{
}


