//
//  QntAppDelegate.h
//  Qnt
//
//  Created by Jackson Lane on 11/27/12.
//  Copyright (c) 2012 Jackson Lane. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface QntAppDelegate : NSObject <NSApplicationDelegate>

- (IBAction)changeView:(id)sender;

@property (assign) IBOutlet NSWindow *window;

@end
