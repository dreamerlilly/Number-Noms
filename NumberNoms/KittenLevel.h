//
//  KittenLevel.h
//  NumberNoms
//
//  Created by Alissa Hartenbaum on 3/13/13.
//
//

#import "CCLayer.h"
#import "CatchSheep.h"


@interface KittenLevel : CCLayer
{
    NSMutableArray *escapePodArray;
}

@property (nonatomic, retain) NSMutableArray *escapePodArray;

@end