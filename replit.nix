{ pkgs }: {
	deps = [
		pkgs.kona
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}