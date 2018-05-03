/*
 Copyright 2018-present the Material Components for iOS authors. All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import "ProductCell.h"


@implementation ProductCell

- (instancetype)initWithCoder:(NSCoder *)aDecoder {
  self = [super initWithCoder:aDecoder];
  if (self) {
    //TODO: Configure the cell properties
    self.backgroundColor = [UIColor whiteColor];

    //TODO: Add MDCCardCollectionCell specific properties
    self.cornerRadius = 8.0;
    [self setBorderWidth:1.0 forState:MDCCardCellStateNormal];
    [self setBorderColor:[UIColor lightGrayColor] forState:MDCCardCellStateNormal];
    
  }
  return self;
}

@end
