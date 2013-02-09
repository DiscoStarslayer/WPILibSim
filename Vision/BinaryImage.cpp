/***********************************************************************
 * AUTHOR: Darren Thompson <Darren>
 *   FILE: BinaryImage.cpp
 *   DATE: Sat Feb 09 17:46:04 2013
 *  DESCR: 
 ***********************************************************************/
#include "BinaryImage.h"

/***********************************************************************
 *  Method: BinaryImage::BinaryImage
 *  Params: 
 * Effects: 
 ***********************************************************************/
BinaryImage::BinaryImage()
{
}


/***********************************************************************
 *  Method: BinaryImage::~BinaryImage
 *  Params: 
 * Effects: 
 ***********************************************************************/
BinaryImage::~BinaryImage()
{
}


/***********************************************************************
 *  Method: BinaryImage::GetNumberParticles
 *  Params: 
 * Returns: int
 * Effects: 
 ***********************************************************************/
int
BinaryImage::GetNumberParticles()
{
}


/***********************************************************************
 *  Method: BinaryImage::GetParticleAnalysisReport
 *  Params: int particleNumber
 * Returns: ParticleAnalysisReport
 * Effects: 
 ***********************************************************************/
ParticleAnalysisReport
BinaryImage::GetParticleAnalysisReport(int particleNumber)
{
}


/***********************************************************************
 *  Method: BinaryImage::GetOrderedParticleAnalysisReports
 *  Params: 
 * Returns: vector<ParticleAnalysisReport> *
 * Effects: 
 ***********************************************************************/
vector<ParticleAnalysisReport> *
BinaryImage::GetOrderedParticleAnalysisReports()
{
}


/***********************************************************************
 *  Method: BinaryImage::Write
 *  Params: const char *fileName
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
BinaryImage::Write(const char *fileName)
{
}


/***********************************************************************
 *  Method: BinaryImage::ParticleMeasurement
 *  Params: int particleNumber, MeasurementType whatToMeasure
 * Returns: double
 * Effects: 
 ***********************************************************************/
double
BinaryImage::ParticleMeasurement(int particleNumber, MeasurementType whatToMeasure)
{
}


/***********************************************************************
 *  Method: BinaryImage::NormalizeFromRange
 *  Params: double position, int range
 * Returns: double
 * Effects: 
 ***********************************************************************/
double
BinaryImage::NormalizeFromRange(double position, int range)
{
}


/***********************************************************************
 *  Method: BinaryImage::CompareParticleSizes
 *  Params: ParticleAnalysisReport particle1, ParticleAnalysisReport particle2
 * Returns: bool
 * Effects: 
 ***********************************************************************/
bool
BinaryImage::CompareParticleSizes(ParticleAnalysisReport particle1, ParticleAnalysisReport particle2)
{
}


