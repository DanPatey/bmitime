//
//  NSObject+BNREmployee.h
//  bmitime
//
//  Created by Dan Patey on 6/20/16.
//  Copyright © 2016 Dan Patey. All rights reserved.
//

#import "BNRPerson.h"
@class BNRAsset;

@interface BNREmployee:BNRPerson

@property (nonatomic) unsigned int employeeID;
@property (nonatomic) NSDate *hireDate;
@property (nonatomic, copy) NSSet *assets;
- (double)yearsOfEmployment;
- (void)addAssets:(BNRAsset *)a;
- (unsigned int)valueOfAssets;

@end