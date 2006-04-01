/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */

/* Cherokee
 *
 * Authors:
 *      Alvaro Lopez Ortega <alvaro@alobbs.com>
 *
 * Copyright (C) 2001-2006 Alvaro Lopez Ortega
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of version 2 of the GNU General Public
 * License as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA
 */

#ifndef CHEROKEE_CONNECTION_HANDLER_NN_H
#define CHEROKEE_CONNECTION_HANDLER_NN_H

#include "common-internal.h"
#include "handler.h"
#include "module_loader.h"


/* Library init function
 */
void MODULE_INIT(nn) (cherokee_module_loader_t *loader);


ret_t cherokee_handler_nn_new  (cherokee_handler_t **hdl, void *cnt, cherokee_table_t *properties);
ret_t cherokee_handler_nn_init (cherokee_handler_t  *hdl);

#endif /* CHEROKEE_CONNECTION_HANDLER_NN_H */
