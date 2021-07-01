project(
    'dehashr',
    'c',
    version : '1.0.0',
    license : 'GPLv3',
    default_options : [
      'c_std=c99',
      'buildtype=release',
      'default_library=shared',
      'optimization=3',
      'b_lto=false',
    ]
)

cflags = '-march=native'
inc = include_directories('include')

# Dependencies
gcrypt = dependency('libgcrypt')
thread = dependency('threads')

executable( 
    'dehashr',

    'src/main.c',
    'src/cli.c',
    'src/hashing.c',
    'src/bruteforce.c',
    # 'src/threads.c',
    dependencies : [gcrypt, thead],
    c_args: cflags,
    include_directories : inc
)
