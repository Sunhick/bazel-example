workspace(name = "root")

local_repository(
  name = "lion",
  path = __workspace_dir__ + "/lion/",
)

local_repository(
  name = "tiger",
  path = __workspace_dir__ + "/tiger/",
)

new_local_repository(
  name = "duck",
  path = __workspace_dir__ + "/duck/",
  build_file = __workspace_dir__ + "/lion/BUILD.duck"
)

git_repository(
    name = "gnu",
    remote = "https://github.com/Sunhick/bazel101-libs.git",
    tag = "v1.0.1",
)