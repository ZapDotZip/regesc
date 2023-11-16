# regex escaper
```
   \\  \\\\    \\\\      \\\\\\    \\\\      \\\\\\    \\\\\\   
  \\\\      \\\\\\\\  \\    \\  \\\\\\\\  \\\\      \\          
 \\        \\        \\    \\  \\            \\\\  \\           
\\          \\\\\\    \\\\\\    \\\\\\  \\\\\\      \\\\\\      
                         \\                                     
                    \\\\                                        
```

### What does regesc do?
`regesc` takes in a string from stdin and prints out an \escaped version, for use as a regular expression. This is useful if you have text containing a lot of special regex characters and wish to escape all of them so that your string can be used as a "literal" regex string, or be ready for modifications into a more complex regex, without having to manually escape everything yourself.

## Usage
```
$ regesc
/he\\o! this i$ a rea||y (bad) [string] t+o ^USE? as {1} regu*lar e><pression.
\/he\\\\o! this i\$ a rea\|\|y \(bad\) \[string\] t\+o \^USE\? as \{1\} regu\*lar e><pression\.
^D
```
or, if from a file:
`regesc < infile > outfile`
