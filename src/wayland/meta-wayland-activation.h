/*
 * Wayland Support
 *
 * Copyright (C) 2020 Red Hat
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Carlos Garnacho <carlosg@gnome.org>
 */

#ifndef META_WAYLAND_ACTIVATION_H
#define META_WAYLAND_ACTIVATION_H

#include <glib.h>
#include <wayland-server.h>

#include "wayland/meta-wayland-types.h"

void meta_wayland_activation_init (MetaWaylandCompositor *compositor);

#endif /* META_WAYLAND_ACTIVATION_H */
