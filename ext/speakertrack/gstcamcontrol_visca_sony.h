/* GstSwitch							    -*- c -*-
 * Copyright (C) 2012,2013 Duzy Chan <code@duzy.info>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/*! @file */

#ifndef __GST_CAM_CONTROLLER_VISCA_SONY_H__by_Duzy_Chan__
#define __GST_CAM_CONTROLLER_VISCA_SONY_H__by_Duzy_Chan__ 1
#include "gstcamcontrol.h"
#include "visca_sony/visca.h"

#define GST_TYPE_CAM_CONTROLLER_VISCA_SONY (gst_cam_controller_visca_sony_get_type ())
#define GST_CAM_CONTROLLER_VISCA_SONY(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), GST_TYPE_CAM_CONTROLLER_VISCA_SONY, GstCamControllerViscaSony))
#define GST_CAM_CONTROLLER_VISCA_SONY_CLASS(class) (G_TYPE_CHECK_CLASS_CAST ((class), GST_TYPE_CAM_CONTROLLER_VISCA_SONY, GstCamControllerViscaSonyClass))
#define GST_IS_CAM_CONTROLLER_VISCA_SONY(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), GST_TYPE_CAM_CONTROLLER_VISCA_SONY))
#define GST_IS_CAM_CONTROLLER_VISCA_SONY_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), GST_TYPE_CAM_CONTROLLER_VISCA_SONY))

typedef struct _GstCamControllerViscaSony
{
  GstCamController base;

  SonyVisca *sony;
} GstCamControllerViscaSony;

typedef struct _GstCamControllerViscaSonyClass
{
  GstCamControllerClass base_class;
} GstCamControllerViscaSonyClass;

GType gst_cam_controller_visca_sony_get_type (void);

#endif //__GST_CAM_CONTROLLER_VISCA_SONY_H__by_Duzy_Chan__
