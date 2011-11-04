/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*-
 *
 * Copyright (C) 2011 Colin Walters <walters@verbum.org>.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * Author: Colin Walters <walters@verbum.org>
 */

#ifndef __OSTREE_VARIANT_UTILS_H__
#define __OSTREE_VARIANT_UTILS_H__

#include <gio/gio.h>

G_BEGIN_DECLS

GHashTable *ot_util_variant_asv_to_hash_table (GVariant *variant);

gboolean ot_util_variant_save (GFile *dest,
                               GVariant *variant,
                               GCancellable *cancellable,
                               GError  **error);

gboolean ot_util_variant_map (GFile *src,
                              const GVariantType *type,
                              GVariant **out_variant,
                              GError  **error);

G_END_DECLS

#endif
