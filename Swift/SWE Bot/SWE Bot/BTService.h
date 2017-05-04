//
//  BTService.h
//  SWE Bot
//
//  Created by Laurel Parsley on 5/4/17.
//  Copyright © 2017 Laurel Parsley. All rights reserved.
//
//  Adapted from code created by Owen Lacy Brown on 5/21/14.
//  https://www.raywenderlich.com/73306/arduino-tutorial-integrating-bluetooth-le-and-ios
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>

/* Services & Characteristics UUIDs */
#define RWT_BLE_SERVICE_UUID		[CBUUID UUIDWithString:@"0000ffe0-0000-1000-8000-00805f9b34fb"]
#define RWT_POSITION_CHAR_UUID		[CBUUID UUIDWithString:@"0000ffe1-0000-1000-8000-00805f9b34fb"]

/* Notifications */
static NSString* const RWT_BLE_SERVICE_CHANGED_STATUS_NOTIFICATION = @"kBLEServiceChangedStatusNotification";


/* BTService */
@interface BTService : NSObject <CBPeripheralDelegate>

- (instancetype)initWithPeripheral:(CBPeripheral *)peripheral;
- (void)reset;
- (void)startDiscoveringServices;

- (void)writePosition:(UInt8)position;

@end
