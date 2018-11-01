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


#include "NumberManagerTest.h"

void NumberManagerTest::TestAddItem_Should_TriggerNumberUpdate()
{
	auto properties1 = new AnnotationTextProperties(2, Qt::red);
	auto properties2 = new AnnotationTextProperties(2, Qt::red);
	auto properties3 = new AnnotationTextProperties(2, Qt::red);
	AnnotationNumber item1(QPointF(0, 0), properties1);
	AnnotationNumber item2(QPointF(0, 0), properties2);
	AnnotationNumber item3(QPointF(0, 0), properties3);
	NumberManager numberManager;

	numberManager.addItem(&item1);
	numberManager.addItem(&item2);
	numberManager.addItem(&item3);

	QCOMPARE(item1.number(), 1);
	QCOMPARE(item2.number(), 2);
	QCOMPARE(item3.number(), 3);
}

void NumberManagerTest::TestUpdateNumbers_Should_BeTriggered_When_ItemIsHidden()
{
	auto properties1 = new AnnotationTextProperties(2, Qt::red);
	auto properties2 = new AnnotationTextProperties(2, Qt::red);
	auto properties3 = new AnnotationTextProperties(2, Qt::red);
	AnnotationNumber item1(QPointF(0, 0), properties1);
	AnnotationNumber item2(QPointF(0, 0), properties2);
	AnnotationNumber item3(QPointF(0, 0), properties3);
	NumberManager numberManager;
	numberManager.addItem(&item1);
	numberManager.addItem(&item2);
	numberManager.addItem(&item3);
	QCOMPARE(item1.number(), 1);
	QCOMPARE(item2.number(), 2);
	QCOMPARE(item3.number(), 3);

	item2.hide();

	QCOMPARE(item1.number(), 1);
	QCOMPARE(item3.number(), 2);
}

QTEST_MAIN(NumberManagerTest);
