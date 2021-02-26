project(
    'dehashr',
    'c',
    version : '1.0.0',
    license : 'GPLv3'
)

# Dependencies
gcrypt = dependency('libgcrypt')

executable(
    'dehashr',
    'src/main.c',
    'src/cli.c',
    'src/hashing.c',
    'src/bruteforce.c',
    #'src/threads.c',
    dependencies : gcrypt
)