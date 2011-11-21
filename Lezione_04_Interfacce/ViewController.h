//
//  ViewController.h
//  Lezione_04_Interfacce
//
//  Created by Alberto Pasca on 31/10/11.
//  Copyright (c) 2011 Cutaway SRL. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
  IBOutlet UIButton *FirstButton;
}
@property (nonatomic, retain) UIButton *FirstButton;

- (IBAction) ButtonTouched:(id)sender;

@end
