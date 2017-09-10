/**
 * \file   lis3dsh.c
 * \author Mav Cuyugan
 * \brief  LIS3DSH accelerometer driver source
 **/

#include "lis3dsh.h"
#include "lis3dsh_reg.h"

void lis3dshObjectInit(LIS3DSHDriver* lis3dsh)
{
  (void)lis3dsh;
  /* TODO: implement this */
}

void lis3dshStart(LIS3DSHDriver* lis3dsh, const LIS3DSHConfig* cfg)
{
  (void)lis3dsh;
  (void)cfg;
  /* TODO: implement this */
}

void lis3dshWhoAmI(LIS3DSHDriver* lis4dsh, uint8_t* buf)
{
  (void)lis3dsh;
  (void)buf;
  /* TODO: implement this */
}

bool lis3dshIsDataReady(LIS3DSHDriver* lis3dsh)
{
  (void)lis3dsh;
  /* TODO: implement this */
}

void lis3dshGetData(LIS3DSHDriver* lis3dsh, float axes[LIS3DSH_AXES])
{
  (void)lis3dsh;
  (void)axes;
  /* TODO: implement this */
}
