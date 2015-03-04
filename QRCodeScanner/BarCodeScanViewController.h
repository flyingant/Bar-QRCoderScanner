//
//  BarCodeScanViewController.h
//  QRCodeScanner
//
//  Created by FlyingAnt on 3/4/15.
//  Copyright (c) 2015 flyingant.me. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface BarCodeScanViewController : UIViewController<AVCaptureMetadataOutputObjectsDelegate>
@property (nonatomic, strong) AVCaptureSession *captureSession;
@property (nonatomic, strong) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (nonatomic, strong) AVAudioPlayer *audioPlayer;
@property (nonatomic) BOOL isScanning;

@property (weak, nonatomic) IBOutlet UIView *scannerPreview;
@property (weak, nonatomic) IBOutlet UITextField *scanResultsField;
@property (weak, nonatomic) IBOutlet UIButton *toggleScanning;


@end
