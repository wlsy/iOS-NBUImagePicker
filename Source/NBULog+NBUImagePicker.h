//
//  NBULog+NBUImagePicker.h
//  NBUImagePicker
//
//  Created by Ernesto Rivera on 2012/12/12.
//  Copyright (c) 2012-2014 CyberAgent Inc.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#ifdef COCOAPODS_POD_AVAILABLE_NBULog

#import <NBULog/NBULog.h>

/// NBUImagePicker log context
#ifndef NBUIMAGEPICKER_LOG_CONTEXT
    #define NBUIMAGEPICKER_LOG_CONTEXT      120
#endif

/// NBUImagePicker modules
#define NBUIMAGEPICKER_MODULE_DEFAULT       0

/**
 NBULog category used to set/get NBUImagePicker log levels.
 
 Default configuration (can be dynamically changed):
 
 - Log level: `LOG_LEVEL_INFO` for `DEBUG`, `LOG_LEVEL_WARN` otherwise.
 
 */
@interface NBULog (NBUImagePicker)

/// @name Adjusting NBUImagePicker Log Levels

/// The current NBUImagePicker log level.
+ (int)imagePickerLogLevel;

/// Dynamically set the NBUImagePicker log level for all modules at once.
/// @param LOG_LEVEL_XXX The desired log level.
/// @note Setting this value clears all modules' levels.
+ (void)setImagePickerLogLevel:(int)LOG_LEVEL_XXX;

@end

#endif

