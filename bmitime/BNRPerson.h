//
//  BNRPerson.h
//  bmitime
//
//  Created by Dan Patey on 6/19/16.
//  Copyright © 2016 Dan Patey. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface  BNRPerson:NSObject

@property (nonatomic) float heightInMeters;
@property (nonatomic) int weightInKilos;

- (float)bodyMassIndex;

@end