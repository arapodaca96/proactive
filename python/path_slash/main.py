import convert
import rmdir

win_path = '.\\d\\f\\g.txt'
bash_path = './d'

print win_path
print convert.slash(win_path)

print

print bash_path
print convert.slash(bash_path)

rmdir.rmdir(convert.slash(bash_path))
