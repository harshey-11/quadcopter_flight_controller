/**
 * \file   lis3dsh.c
 * \author Mav Cuyugan
 * \brief  LIS3DSH accelerometer driver header
 **/

#ifndef LIS3DSH_H
#define LIS3DSH_H

#define LIS3DSH_AXES        3U

typedef struct
{

} LIS3DSHConfig;

typedef struct
{

} LIS3DSHDriver;

#ifdef __cplusplus
extern "C" {
#endif

void lis3dshObjectInit(LIS3DSHDriver* lis3dsh);
void lis3dshStart(LIS3DSHDriver* lis3dsh, const LIS3DSHConfig* cfg);
void lis3dshWhoAmI(LIS3DSHDriver* lis4dsh, uint8_t* buf);
bool lis3dshIsDataReady(LIS3DSHDriver* lis3dsh);
void lis3dshGetData(LIS3DSHDriver* lis3dsh, float axes[LIS3DSH_AXES]);

#ifdef __cplusplus
}
#endif

#endif /* LIS3DSH_H */
