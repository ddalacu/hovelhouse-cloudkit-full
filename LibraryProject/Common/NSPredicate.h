//
//  NSPredicate.h
//
//  Created by Jonathan Culp <jonathanculp@gmail.com> on 03/26/2020
//  Copyright © 2020 HovelHouseApps. All rights reserved.
//  Unauthorized copying of this file, via any medium is strictly prohibited
//  Proprietary and confidential
//

#import <Foundation/Foundation.h>
#import "Callbacks.h"

// Class Methods 
extern "C" void* NSPredicate_predicateWithValue(
	bool value,
    void** exception
    );

extern "C" void* NSPredicate_predicateWithFormat(
	const char* predicateFormat,
    void** exception
    );


// Init Methods 

// Instance methods 

// Void methods 

// Properties 
extern "C" const char* NSPredicate_GetPropPredicateFormat(void* ptr);



extern "C" void NSPredicate_Dispose(void* ptr);
