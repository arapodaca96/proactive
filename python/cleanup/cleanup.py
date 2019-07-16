import os

def cleanup(path, exts, files_to_keep):
    for root, dirs, files in os.walk(path):
        for curr_file in files:
            if (curr_file.endswith(exts)) and (curr_file not in files_to_keep):
                print 'Deleting {}'.format(curr_file)
                os.remove(os.path.join(root, curr_file))


path = './test'
extensions = ('.txt', '.png', '.jpg')
files_to_keep = ['keep_this_file.txt', 'keep_this.png']

cleanup(path, extensions, files_to_keep)
