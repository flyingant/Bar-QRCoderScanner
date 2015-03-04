//
//  ViewController.m
//  QRCodeScanner
//
//  Created by FlyingAnt on 3/4/15.
//  Copyright (c) 2015 flyingant.me. All rights reserved.
//

#import "ViewController.h"
#import "QRCodeScanViewController.h"
#import "BarCodeScanViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


-(IBAction)qrCodeScanner:(id)sender
{
    QRCodeScanViewController *qrCodeScanViewController = [self.storyboard instantiateViewControllerWithIdentifier:@"QRCodeScanViewController"];
    [self.navigationController pushViewController:qrCodeScanViewController animated:YES];
};

-(IBAction)barCodeScanner:(id)sender
{
    BarCodeScanViewController *barCodeScanViewController = [self.storyboard instantiateViewControllerWithIdentifier:@"BarCodeScanViewController"];
    [self.navigationController pushViewController:barCodeScanViewController animated:YES];
    
};

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}



@end
