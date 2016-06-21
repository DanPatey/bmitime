//
//  BNRPerson.m
//  bmitime
//
//  Created by Dan Patey on 6/19/16.
//  Copyright © 2016 Dan Patey. All rights reserved.
//

#import "BNRPerson.h"

@implementation BNRPerson

- (float)bodyMassIndex
{
    float h = [self heightInMeters];
    return [self weightInKilos] / (h * h);
}

@end