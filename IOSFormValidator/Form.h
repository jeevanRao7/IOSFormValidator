//
//  Form.h
//  IOSFormValidator
//
//  Created by Jeevan on 02/02/17.
//  Copyright © 2017 byjeevan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Field.h"
#import "IsEmpty.h"
#import "IsValidEmail.h"
#import "IsValidDate.h"
#import "IsValidLength.h"
#import "IsNumber.h"
#import "IsAlphabet.h"

@interface Form : NSObject

@property (nonatomic,strong) NSMutableArray * fields;

@property (assign) BOOL errorMessageDefaultHidden;

-(void) addNewField:(Field *) field;

-(void) addNewField:(Field *)field withDependencyField:(Field *) dependencyField;

-(BOOL) isFormValid;

@end
