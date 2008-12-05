//
//  HCAppDelegate.h
//  HTTPClient
//
//  Copyright 2008 Todd Ditchendorf. All rights reserved.
//

#import <Cocoa/Cocoa.h>

extern NSString *HCPlaySuccessFailureSoundsKey;
extern NSString *HCWrapRequestResponseTextKey;
extern NSString *HCSyntaxHighlightRequestResponseTextKey;

extern NSString *HCWrapRequestResponseTextChangedNotification;
extern NSString *HCSyntaxHighlightRequestResponseTextChangedNotification;

@interface HCAppDelegate : NSDocumentController {
}
- (IBAction)showPreferences:(id)sender;
@end
