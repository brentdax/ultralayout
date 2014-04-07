UltraLayout
==========

UltraLayout allows you to easily create autolayout constraints with compile-time syntax checking.

For example:

    // Make the right edge of leftView always meet the left edge of rightView
    [leftView.right constrainTo:rightView.left];
    
    // Make the tops and bottoms of leftView and rightView line up
    [leftView constrainToVerticalOfView:rightView];
    
    // Make leftView and rightView fill the width of their superview
    [leftView.left constrainTo:leftView.superview.left];
    [rightView.right constrainTo:rightView.superview.right];
    
    // Stick them to the center and give them a fixed height.
    [leftView.centerY constrainTo:leftView.superview.centerY];
    [leftView.height constrainToValue:100];

UltraLayout also adds a new UIView initializer that returns autolayout-ready views:

    UIView * myView = [[UIView alloc] initWithSuperview:anotherView];
    [myView.left constrainTo:anotherView.left];

And NSLayoutConstraint methods to easily add a constraint:

    [aConstraint add];  // Automatically decides a view to use
    [UIView animateWithDuration:0.5 animations:^{ [self.view layoutIfNeeded]; } completion:^{ [aConstraint remove]; }];

Currently UltraLayout only supports iOS, but everything is in place to make a Mac version; it's a simple matter of programming to add the necessary categories to NSView.

Isn't the name a bit much?
-----------------------

Well, it's pretty cool, but maybe not "ultra". UltraLayout was originally written for [Converter Neue](https://itunes.apple.com/us/app/converter-neue/id690448568?mt=8), which carried the codename UltraLight.

Author
-----

Brent Royal-Gordon, [Architechies](http://architechies.com).

File issues or pull requests at the [UltraLayout GitHub project]().

License
-----

MIT should be fine, don't you think?

> Copyright (C) 2013-14 Architechies.
> 
> Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
> 
> The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
> 
> THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

