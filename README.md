# Convert Calendar

A tiny and powerful library for converting **calendar** date units. (gregorian, jalali)

# Using

```c
date result = gregorian2jalali(input);
date result = jalali2gregorian(input);
```

### Functions

```c
date gregorian2jalali(date input);
date jalali2gregorian(date input);
```

## Example I/O

```
Input: 2019, 03, 31
Output: 1398, 1, 11
```

```
Input: 1398, 1, 13
Output: 2019, 04, 02
```

## Compile Example

```
$ git clone https://github.com/BaseMax/ConvertCalendar
$ cd ConvertCalendar/
$ cd example/
$ gcc main.c ../source/ConvertCalendar.c -o main
$ ./main
```

## License

ConvertCalendar is licensed under the [GNU General Public License](https://github.com/BaseMax/ConvertCalendar/blob/master/LICENSE).
