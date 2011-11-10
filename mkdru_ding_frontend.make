api = 2
core = 7.x

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.0-rc1"
projects[ctools][patch][] = "http://drupal.org/files/issues/user_edit_form-p0-format-1184168.patch"

projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0-beta4

projects[mkdru][subdir] = contrib
; Pulling out of git for the moment being, 1.1 is broken.
; projects[mkdru][subdir] = "contrib"
; projects[mkdru][version] = "1.1"
projects[mkdru][type] = "module"
projects[mkdru][download][type] = "git"
projects[mkdru][download][url] = "http://git.drupal.org/project/mkdru.git"
projects[mkdru][download][revision] = "02b4e03829e5597b3fe0c4e50f6d5a129c9d28a3"
projects[mkdru][patch][] = "http://drupal.org/files/correct-drupal-t-function.patch"
projects[mkdru][patch][] = "http://drupal.org/files/selected-facet-disappears-in-ie8-and-below-1337572.patch"

projects[mkdru_ding][subdir] = contrib
projects[mkdru_ding][type] = "module"
projects[mkdru_ding][download][type] = "git"
projects[mkdru_ding][download][url] = "git://github.com/indexdata/mkdru_ding.git"
projects[mkdru_ding][download][branch] = "7.x-1.x"

; Libraries
projects[pazpar2][type] = "library"
projects[pazpar2][download][type] = "git"
projects[pazpar2][download][url] = "git://git.indexdata.com/pazpar2.git"

