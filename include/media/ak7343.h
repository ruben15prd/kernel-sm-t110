/*
 * Definitions and platform data for drivers dw9714l
 *
 * Copyright (C) 2012 Marvell Internation Ltd.
 *
 * Chunlin Hu <huchl@marvell.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 */

#ifndef ____LINUX_I2C_AK7343_H
#define ____LINUX_I2C_AK7343_H

#include <linux/types.h>
#include <media/v4l2-chip-ident.h>
#include <media/v4l2-common.h>

struct vcm_platform_data {
	char power_domain[20];
	int pwdn_gpio;
	int pwdn_en;
};
void ak7343_io_power(struct i2c_client *client, char on);

#endif /* ____LINUX_I2C_ak7343_H */
