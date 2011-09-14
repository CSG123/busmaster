/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * \file      BaseAppServices.h
 * \brief     Base class definition for the application service layer
 * \author    Ratnadip Choudhury
 * \copyright Copyright (c) 2011, Robert Bosch Engineering and Business Solutions. All rights reserved.
 *
 * Base class definition for the application service layer
 */

#if !defined BASEAPPSERVICES_MCNET_H__INCLUDED_
#define BASEAPPSERVICES_MCNET_H__INCLUDED_

class CBaseAppServices
{
public:
    virtual BOOL bWriteToTrace(TCHAR* pcTraceStr) = 0;
};

#endif // BASEAPPSERVICES_MCNET_H__INCLUDED_