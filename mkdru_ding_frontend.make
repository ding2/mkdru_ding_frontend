api = 2
core = 7.x

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.0-rc1"

projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0-beta3

projects[mkdru][subdir] = contrib
; Pulling out of git for the moment being, 1.1 is broken.
; projects[mkdru][subdir] = "contrib"
; projects[mkdru][version] = "1.1"
projects[mkdru][type] = "module"
projects[mkdru][download][type] = "git"
projects[mkdru][download][url] = "http://git.drupal.org/project/mkdru.git"
projects[mkdru][download][revision] = "947e7c9531636f1d171ceade776d1f65aa8f92a9"

projects[mkdru_ding][type] = "module"
projects[mkdru_ding][download][type] = "git"
projects[mkdru_ding][download][url] = "git://github.com/indexdata/mkdru_ding.git"
projects[mkdru_ding][download][branch] = "7.x-1.x"
