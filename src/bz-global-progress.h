/* bz-global-progress.h
 *
 * Copyright 2025 Adam Masciola
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#pragma once

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define BZ_TYPE_GLOBAL_PROGRESS (bz_global_progress_get_type ())
G_DECLARE_FINAL_TYPE (BzGlobalProgress, bz_global_progress, BZ, GLOBAL_PROGRESS, GtkWidget)

GtkWidget *
bz_global_progress_new (void);

void
bz_global_progress_set_active (BzGlobalProgress *self,
                               gboolean          active);

gboolean
bz_global_progress_get_active (BzGlobalProgress *self);

void
bz_global_progress_set_fraction (BzGlobalProgress *self,
                                 double            fraction);

double
bz_global_progress_get_fraction (BzGlobalProgress *self);

void
bz_global_progress_set_actual_fraction (BzGlobalProgress *self,
                                        double            fraction);

double
bz_global_progress_get_actual_fraction (BzGlobalProgress *self);

void
bz_global_progress_set_transition_progress (BzGlobalProgress *self,
                                            double            progress);

double
bz_global_progress_get_transition_progress (BzGlobalProgress *self);

void
bz_global_progress_set_icon_name (BzGlobalProgress *self,
                                  const char       *icon_name);

const char *
bz_global_progress_get_icon_name (BzGlobalProgress *self);

G_END_DECLS
