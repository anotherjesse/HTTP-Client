//
//  HCDocument.h
//  HTTPClient
//
//  Copyright 2008 Todd Ditchendorf. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class HCWindowController;

@interface HCDocument : NSDocument {
    HCWindowController *windowController;
}
@property (nonatomic, retain) HCWindowController *windowController;
@end
