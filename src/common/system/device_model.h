#ifndef DEVICE_MODEL_H__
#define DEVICE_MODEL_H__

#include "utils/file.h"
#include <stdio.h>

#define MIYOO283 283
#define MIYOO354 354

static int DEVICE_ID;

/**
 * @brief Get device model
 * MM = Miyoo mini
 * MMP = Miyoo mini plus
 */

void getDeviceModel(void)
{
    FILE *fp;
    file_get(fp, "/tmp/deviceModel", "%d", &DEVICE_ID);
}

#endif // DEVICE_MODEL_H__
