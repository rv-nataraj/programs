import 'dart:io';

main() {
	stdout.writeln("Enter your name:");
	var name = stdin.readLineSync();
	print('your name is $name');

	print('Enter your age:?');
	var age=int.tryParse(stdin.readLineSync() ?? "");
	if (age==null)
		print('bad number');
	else
		print('your age is $age');

	stdout.write("2 + 4 = ?");
	var ans=stdin.readLineSync();
	print(ans == '6' ? 'yes' : 'no');
}
