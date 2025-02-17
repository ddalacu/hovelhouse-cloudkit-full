//
//  CKQueryNotification.h
//
//  Created by Jonathan Culp <jonathanculp@gmail.com> on 05/28/2020
//  Copyright © 2020 HovelHouseApps. All rights reserved.
//  Unauthorized copying of this file, via any medium is strictly prohibited
//  Proprietary and confidential
//

#import <Foundation/Foundation.h>
#import "Callbacks.h"

// Class Methods 

// Init Methods 

// Instance methods 

// Void methods 

// Properties 
extern "C" long CKQueryNotification_GetPropDatabaseScope(void* ptr);
extern "C" long CKQueryNotification_GetPropQueryNotificationReason(void* ptr);
extern "C" void* CKQueryNotification_GetPropRecordID(void* ptr);



extern "C" void CKQueryNotification_Dispose(void* ptr);
