//
//  ViewController.swift
//  Light
//
//  Created by Avaneesh Jai Damaraju on 03/09/20.
//  Copyright © 2020 Avaneesh Jai Damaraju. All rights reserved.
//

import UIKit

var lightOn = true
class ViewController: UIViewController {
    
    @IBAction func buttonPressed(_ sender: Any) {
        lightOn = !lightOn
        updateUI()
    }
    func updateUI()
    {
        view.backgroundColor = lightOn ? .white : .black
    }
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        updateUI()
        // Do any additional setup after loading the view.
    }
   
  
    
    
 

    }
    




