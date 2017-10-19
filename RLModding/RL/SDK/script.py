import os.path
import sys

if len(sys.argv) <= 1:
	print("No files detected")
	sys.exit(1)

for i in range(1, len(sys.argv)):
	print(sys.argv[i])
	old_name = sys.argv[i]
	os.rename(sys.argv[i], sys.argv[i]+'.backup')
	f = open(old_name, 'w')
	b = open(sys.argv[i]+'.backup', 'r')
	data = b.readlines()
	for line in data:
		if 'class S' in line and ':' not in line:
			line = line.strip() + ' : public UState '
		f.write(line)
	b.close()  
	f.close()
	os.remove(sys.argv[i]+'.backup') 	