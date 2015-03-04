//
//  ViewController.h
//  QRCodeScanner
//
//  Created by FlyingAnt on 3/4/15.
//  Copyright (c) 2015 flyingant.me. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController <UINavigationControllerDelegate>


-(IBAction)qrCodeScanner:(id)sender;
-(IBAction)barCodeScanner:(id)sender;


@end

