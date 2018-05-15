/*
 * Copyright (C) 2018 Damir Porobic <damir.porobic@gmx.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef MATHHELPER_H
#define MATHHELPER_H

#include <QtMath>

class MathHelper
{
public:
    static qreal roundAngleTo(const qreal currentAngle, const int increments);
    static qreal smallerValue(qreal value1, qreal value2);
    static QPointF rectTop(const QRectF &rect);
    static QPointF rectRight(const QRectF &rect);
    static QPointF rectBottom(const QRectF &rect);
    static QPointF rectLeft(const QRectF &rect);
};

#endif // MATHHELPER_H
