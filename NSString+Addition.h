//
//  NSString+Addition.h
//  BLEDemo
//
//  Created by Mohammad Masud Rana on 2/17/16.
//  Copyright © 2016 Mohammad Masud Rana. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Addition)

- (NSString *)removeNumbersFromString:(NSString *)string;
- (BOOL)isBlank;
- (BOOL)contains:(NSString *)string;
- (NSArray *)splitOnChar:(char)ch;
- (NSString *)substringFrom:(NSInteger)from to:(NSInteger)to;
- (NSString *)stringByStrippingWhitespace;

@end
