// archivo para demo de montaje, no para imprimir

%base();
translate([0,-46,25])rotate([-90,0,0])us();
color("gray")translate([0,-42,30])rotate([0,180,0])tornillo();
color("gray")translate([0,-42,-5])tuerca();

module tuerca(){
difference(){
cylinder(d=6,h=2,$fn=6);
translate([0,0,-1])cylinder(d=3,h=4,$fn=30);    
}
}

module tornillo(){
$fn=30;
difference(){
union(){
cylinder(d=3,h=13);
cylinder(d=6,h=3);
}
translate([0,0,-1])cylinder(d=3.5,h=3,$fn=6);
}
}


module base(){
$fn=120;

difference(){

union(){
cylinder(d=120,h=3);
translate([-26.5,55,0])rotate([0,0,-90]){
translate([13.97,2.5,0])cylinder(d=8,h=6);
translate([15.24,50.7,0])cylinder(d=8,h=6);
translate([66.04,7.6,0])cylinder(d=8,h=6);
translate([66.04,35.5,0])cylinder(d=8,h=6);
}
}

translate([39,-27.5,-1])cube(55);
scale([-1,1,1])translate([39,-27.5,-1])cube(55);
translate([44,34,-1])cylinder(d=3.2,h=5);    
translate([-44,34,-1])cylinder(d=3.2,h=5);    
translate([44,-34,-1])cylinder(d=3.2,h=5);    
translate([-44,-34,-1])cylinder(d=3.2,h=5);
translate([0,-25,-1])cylinder(d=20,h=5);
translate([0,-42,-1])cylinder(d=3.2,h=5);
rotate([0,0,35])translate([0,-42,-1])cylinder(d=3.2,h=5);    
rotate([0,0,-35])translate([0,-42,-1])cylinder(d=3.2,h=5);  

translate([-26.5,55,0])rotate([0,0,-90]){
translate([13.97,2.5,0])cylinder(d=2.9,h=10);
translate([15.24,50.7,0])cylinder(d=2.9,h=10);
translate([14.24,46.2,5])cube(6);
translate([66.04,7.6,0])cylinder(d=2.9,h=10);
translate([66.04,35.5,0])cylinder(d=2.9,h=10);
}

}
}


module us(){
difference()
{
minkowski($fn=30){
cube([45.5,20,6],center=true);
cylinder(d=4,h=0.000001);
}
translate([0,0,2])cube([45.6,25,5],center=true);
    
translate([13,0,-5])cylinder(d=17,h=5,$fn=60);
translate([-13,0,-5])cylinder(d=17,h=5,$fn=60);
hull(){
translate([-3.5,7.5,-5])cylinder(d=4,h=5,$fn=60);
translate([3.5,7.5,-5])cylinder(d=4,h=5,$fn=60);
}
hull(){
translate([-3.5,-8,-5])cylinder(d=4,h=5,$fn=60);
translate([3.5,-8,-5])cylinder(d=4,h=5,$fn=60);
}
}
hull(){
translate([23,9,1.9])sphere(0.8,$fn=20);
translate([23,-9,1.9])sphere(0.8,$fn=20);
}
hull(){
translate([-23,9,1.9])sphere(0.8,$fn=20);
translate([-23,-9,1.9])sphere(0.8,$fn=20);
}
translate([9.5,14,-3])rotate([0,0,180])
scale([1,1,1.25])acuerdo();
translate([-9.5,14,-3])rotate([0,0,-90])
scale([1,1,1.25])acuerdo();

translate([-7.5,12,-3])cube([15,7,2.5]);
difference(){
translate([-7.5,17,-3])cube([15,2.5,11]);
translate([0,0,4])rotate([-90,0,0])
cylinder(d=3.2,h=20,$fn=30);
}
translate([-7.5,15,1.5])scale([7.5,1,1])
rotate([0,90,0])acuerdo();

module acuerdo(){
difference(){
cube(2);
cylinder(d=4,h=2,$fn=30);
}
}
}
