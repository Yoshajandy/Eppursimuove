cube ([80,165,4]);
translate([0,8,4])
cube ([80,2,20]);
translate([2,53,4])
rotate([0,0,90])
cube ([110,2,40]);
translate([80,53,4])
rotate([0,0,90])
cube ([110,2,40]);

translate([0,163,4])
cube ([80,2,40]);





translate([0,8,4])
difference(){
cube ([80,45,20]);
    
translate ([10,0,0])
cube ([60,45,20]);
    
translate ([0,45/2,29.5/2])
rotate([0,90,0])
cylinder (d=29.5,h=80);
    

    

}